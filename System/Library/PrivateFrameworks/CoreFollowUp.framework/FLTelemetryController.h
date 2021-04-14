/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FLTelemetryController <NSObject>
@required
-(void)captureItemRemoval:(id)arg1;
-(void)captureItemAddition:(id)arg1;
-(void)captureCurrentState:(id)arg1;
-(void)captureActionForItemIdentifier:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
-(void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
-(void)captureItemView:(id)arg1;

@end

