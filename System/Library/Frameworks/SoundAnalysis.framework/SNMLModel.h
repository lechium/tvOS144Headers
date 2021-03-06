/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MLModelDescription;


@protocol SNMLModel <NSObject>
@property (readonly) MLModelDescription * modelDescription; 
@required
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end

