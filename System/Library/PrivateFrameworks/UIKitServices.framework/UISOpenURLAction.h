/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class NSURL, BSProcessHandle;

@interface UISOpenURLAction : BSAction

@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) BSProcessHandle * workspaceOriginatingProcess; 
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(BSProcessHandle *)workspaceOriginatingProcess;
-(id)initWithURL:(id)arg1 workspaceOriginatingProcess:(id)arg2 ;
@end

