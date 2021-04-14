/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKInputEvent.h>

@interface TISKDeleteKeyEvent : TISKInputEvent {

	long long _deletePostion;

}

@property (assign,nonatomic) long long deletePostion;              //@synthesize deletePostion=_deletePostion - In the implementation block
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(id)arg1 emojiSearchMode:(BOOL)arg2 order:(long long)arg3 ;
-(long long)_metricDeleteKeyPostion;
-(long long)deletePostion;
-(void)setDeletePostion:(long long)arg1 ;
@end
