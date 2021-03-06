/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIATextField : UIAElement

- (BOOL)_textFieldShouldAcceptAXElement:(id)arg1;
- (UIAElementArray *)elements;
- (id)scriptingActionExpressionShouldFavorTapOffset;

@end
