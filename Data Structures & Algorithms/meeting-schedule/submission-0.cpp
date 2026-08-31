/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
    public:
        bool canAttendMeetings(std::vector<Interval>& intervals) {
                if (intervals.empty()) {
                            return true;
                                    }

                                            // Sort intervals by starting time
                                                    std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
                                                                return a.start < b.start;
                                                                        });

                                                                                // Check for overlaps between adjacent meetings
                                                                                        for (size_t i = 1; i < intervals.size(); ++i) {
                                                                                                    if (intervals[i].start < intervals[i - 1].end) {
                                                                                                                    return false;
                                                                                                                                }
                                                                                                                                        }

                                                                                                                                                return true;
                                                                                                                                                    }
                                                                                                                                                    };
