/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANHomeManagerDelegate <NSObject>
@optional
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
-(void)home:(id)arg1 didAddAccessory:(id)arg2;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2;
-(void)accessoryDidUpdateControllable:(id)arg1;
-(void)didAddHome:(id)arg1;
-(void)didRemoveHome:(id)arg1;

@end

