#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface BRPersonalTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *headerImageView;
@property (weak, nonatomic) IBOutlet UITextField *rightField;
@property (weak, nonatomic) IBOutlet UIImageView *rightIMageView;
+ (BRPersonalTableViewCell *)cellWithTableView:(UITableView *)tableView;
@end
NS_ASSUME_NONNULL_END
