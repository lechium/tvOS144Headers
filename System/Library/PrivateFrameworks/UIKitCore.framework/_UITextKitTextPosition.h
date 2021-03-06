/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition {

	long long _offset;
	long long _affinity;

}

@property (assign) long long offset;                //@synthesize offset=_offset - In the implementation block
@property (assign) long long affinity;              //@synthesize affinity=_affinity - In the implementation block
+(id)positionWithOffset:(long long)arg1 ;
+(id)positionWithOffset:(long long)arg1 affinity:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(long long)affinity;
-(void)setAffinity:(long long)arg1 ;
@end

