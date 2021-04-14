/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UISApplicationInitializationContext;

@interface _UIApplicationConfigurationLoader : NSObject {

	UISApplicationInitializationContext* _applicationInitializationContext;
	AB _hasRequestedPreload;

}

@property (nonatomic,readonly) UISApplicationInitializationContext * applicationInitializationContext; 
@property (nonatomic,readonly) BOOL isFrontBoard; 
@property (nonatomic,readonly) BOOL usesLocalInitializationContext; 
+(id)sharedLoader;
-(void)dealloc;
-(id)_init;
-(BOOL)isFrontBoard;
-(BOOL)usesLocalInitializationContext;
-(void)startPreloadInitializationContext;
-(UISApplicationInitializationContext *)applicationInitializationContext;
-(id)_appInitializationContextFactoryClass;
-(id)_loadInitializationContext;
@end

