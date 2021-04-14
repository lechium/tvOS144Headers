/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EspressoBrick.h>

@class NSNumber, NSArray, NSString;

@interface MLSlidingWindowsBrick : NSObject <EspressoBrick> {

	BOOL _shapeInfoNeeded;
	NSNumber* _axis;
	NSNumber* _step;
	NSNumber* _size;
	NSArray* _inputRanks;
	NSArray* _outputRanks;
	NSArray* _inputShapes;
	NSArray* _outputShapes;

}

@property (nonatomic,readonly) BOOL shapeInfoNeeded;                //@synthesize shapeInfoNeeded=_shapeInfoNeeded - In the implementation block
@property (nonatomic,readonly) NSNumber * axis;                     //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) NSNumber * step;                     //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) NSNumber * size;                     //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSArray * inputRanks;                //@synthesize inputRanks=_inputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * outputRanks;               //@synthesize outputRanks=_outputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * inputShapes;               //@synthesize inputShapes=_inputShapes - In the implementation block
@property (nonatomic,readonly) NSArray * outputShapes;              //@synthesize outputShapes=_outputShapes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)size;
-(id)initWithParameters:(id)arg1 ;
-(NSNumber *)step;
-(NSNumber *)axis;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(BOOL)shapeInfoNeeded;
-(NSArray *)inputRanks;
-(NSArray *)outputRanks;
-(NSArray *)inputShapes;
-(NSArray *)outputShapes;
@end

