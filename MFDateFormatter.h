#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@interface MFDateFormatter : NSObject
+ (instancetype)share;
- (NSString *)stringOfDate:(NSDate *)date format:(NSString *)format;
- (NSDate *)dateOfString:(NSString *)dateStr format:(NSString *)format;
- (NSString *)weekDayOfDate:(NSString *)dateStr dateFormatter:(NSString *)formatter;
@end
NS_ASSUME_NONNULL_END
