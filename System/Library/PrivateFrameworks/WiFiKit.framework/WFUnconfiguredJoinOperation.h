/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WFOperation.h>

@class UINavigationController, UIViewController, NSDictionary;

@interface WFUnconfiguredJoinOperation : WFOperation {

	UINavigationController* _navigationController;
	UIViewController* _rootViewController;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                      //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                  //@synthesize parameters=_parameters - In the implementation block
-(void)start;
-(void)finish;
-(NSDictionary *)parameters;
-(UIViewController *)rootViewController;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)initWithParameters:(id)arg1 rootViewController:(id)arg2 ;
@end

