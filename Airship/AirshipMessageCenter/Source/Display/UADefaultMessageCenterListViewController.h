/* Copyright Airship and Contributors */

#import <UIKit/UIKit.h>
#import "UAMessageCenterListViewDelegate.h"

@class UAInboxMessage;
@class UAMessageCenterStyle;

NS_ASSUME_NONNULL_BEGIN

/**
 * Default implementation of a list-style Message Center UI.
 */
@interface UADefaultMessageCenterListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource,
    UIScrollViewDelegate>

///---------------------------------------------------------------------------------------
/// @name Default Message Center List View Controller Properties
///---------------------------------------------------------------------------------------

/**
 * The style to apply to the list.
 */
@property (nonatomic, strong) UAMessageCenterStyle *style;

/**
 * An optional predicate for filtering messages.
 */
@property (nonatomic, strong) NSPredicate *filter;

/**
 * The list view delegate.
 */
@property (nonatomic, weak) id<UAMessageCenterListViewDelegate> delegate;

/**
 * The currently selected index path.
 */
@property (nonatomic, strong, nullable) NSIndexPath *selectedIndexPath;

/**
 * The currently selected message.
 */
@property (nonatomic, copy, nullable) NSString *selectedMessageID;

@end

NS_ASSUME_NONNULL_END
