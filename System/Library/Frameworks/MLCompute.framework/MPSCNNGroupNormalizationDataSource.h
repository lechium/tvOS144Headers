/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPSCNNGroupNormalizationDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels; 
@property (assign,nonatomic) unsigned long long numberOfGroups; 
@optional
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg1 groupNormalizationStateBatch:(id)arg2;
-(BOOL)updateGammaAndBetaWithGroupNormalizationStateBatch:(id)arg1;

@required
-(id)label;
-(float*)gamma;
-(float*)beta;
-(unsigned long long)numberOfFeatureChannels;
-(unsigned long long)numberOfGroups;
-(void)setNumberOfGroups:(unsigned long long)arg1;

@end

