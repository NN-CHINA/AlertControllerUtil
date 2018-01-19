//
//  AlertControllerUtil.h
//  bg
//
//  Created by 喵喵炭 on 2017/5/13.
//  Copyright © 2017年 BinaryHunter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlertControllerUtil : NSObject

+ (void)AlertControllerShowInViewController:(UIViewController *)controller
                                     delegate:(id)delegate
                                    withTitle:(NSString *)title
                                      message:(NSString *)message
                               preferredStyle:(UIAlertControllerStyle)preferredStyle
                            cancelButtonTitle:(NSString *)cancelButtonTitle
                           otherButtonActions:(NSArray<NSString *> *)actions
                            otherButtonTitles:(NSString *)otherTitles,...;

@end
