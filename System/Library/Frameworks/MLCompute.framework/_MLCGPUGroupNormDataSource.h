/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSCNNGroupNormalizationDataSource.h>

@class MLCTensor, NSString;

@interface _MLCGPUGroupNormDataSource : NSObject <MPSCNNGroupNormalizationDataSource> {

	float _varianceEpsilon;
	unsigned long long _numberOfFeatureChannels;
	unsigned long long _numberOfGroups;
	MLCTensor* _betas;
	MLCTensor* _gammas;

}

@property (nonatomic,__weak,readonly) MLCTensor * betas;                                //@synthesize betas=_betas - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * gammas;                               //@synthesize gammas=_gammas - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                                   //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels;              //@synthesize numberOfFeatureChannels=_numberOfFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfGroups;                         //@synthesize numberOfGroups=_numberOfGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)datasourceWithChannels:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 epsilon:(float)arg5 ;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
-(float)epsilon;
-(float*)gamma;
-(float*)beta;
-(unsigned long long)numberOfFeatureChannels;
-(unsigned long long)numberOfGroups;
-(void)setNumberOfGroups:(unsigned long long)arg1 ;
-(id)initWithChannels:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 epsilon:(float)arg5 ;
-(MLCTensor *)betas;
-(MLCTensor *)gammas;
-(float)varianceEpsilon;
@end

