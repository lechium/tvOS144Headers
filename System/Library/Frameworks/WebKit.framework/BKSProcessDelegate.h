/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BKSProcessDelegate <NSObject>
@optional
-(void)process:(id)arg1 taskStateDidChange:(long long)arg2;
-(void)process:(id)arg1 isBeingDebugged:(BOOL)arg2;
-(void)process:(id)arg1 didExitWithContext:(id)arg2;
-(void)processWillExpire:(id)arg1;

@end

