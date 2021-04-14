/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrint100kDoorbellModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _Sigmoid;

}

@property (setter=igmoid,nonatomic,retain) MLMultiArray * Sigmoid;              //@synthesize Sigmoid=_Sigmoid - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithSigmoid:(id)arg1 ;
-(MLMultiArray *)Sigmoid;
-(void)setSigmoid:(MLMultiArray *)arg1 ;
@end

