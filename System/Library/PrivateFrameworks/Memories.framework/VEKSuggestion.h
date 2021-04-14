/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PHAsset;

@interface VEKSuggestion : NSObject <NSSecureCoding> {

	PHAsset* _asset;
	long long _usage;
	long long _volume;
	long long _specialTreatment;
	double _reorderTimeOffset;

}

@property (nonatomic,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long usage;                         //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) long long volume;                        //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) long long specialTreatment;              //@synthesize specialTreatment=_specialTreatment - In the implementation block
@property (assign,nonatomic) double reorderTimeOffset;                //@synthesize reorderTimeOffset=_reorderTimeOffset - In the implementation block
-(id)description;
-(long long)usage;
-(void)setUsage:(long long)arg1 ;
-(long long)volume;
-(void)setVolume:(long long)arg1 ;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(long long)specialTreatment;
-(double)reorderTimeOffset;
-(void)setSpecialTreatment:(long long)arg1 ;
-(void)setReorderTimeOffset:(double)arg1 ;
@end

