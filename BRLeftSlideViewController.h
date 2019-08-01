#define kScreenSize           [[UIScreen mainScreen] bounds].size
#define kScreenWidth          [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight         [[UIScreen mainScreen] bounds].size.height
#define kMainPageDistance   100   
#define kMainPageScale   0.8  
#define kMainPageCenter  CGPointMake(kScreenWidth + kScreenWidth * kMainPageScale / 2.0 - kMainPageDistance, kScreenHeight / 2)  
#define vCouldChangeDeckStateDistance  (kScreenWidth - kMainPageDistance) / 2.0 - 40 
#define vSpeedFloat   0.7    
#define kLeftAlpha 0.9  
#define kLeftCenterX 30 
#define kLeftScale 0.7 
#define vDeckCanNotPanViewTag    987654   
#import <UIKit/UIKit.h>
#import "UIView_extra.h"
@interface BRLeftSlideViewController : UIViewController
@property (nonatomic, assign) CGFloat speedf;
@property (nonatomic, strong) UIViewController *leftVC;
@property (nonatomic,strong) UIViewController *mainVC;
@property (nonatomic, strong) UITapGestureRecognizer *sideslipTapGes;
@property (nonatomic, strong) UIPanGestureRecognizer *pan;
@property (nonatomic, assign) BOOL closed;
- (instancetype)initWithLeftView:(UIViewController *)leftVC
                     andMainView:(UIViewController *)mainVC;
- (void)closeLeftView;
- (void)openLeftView;
- (void)setPanEnabled: (BOOL) enabled;
@end
