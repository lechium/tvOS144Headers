/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MLCDeviceOptimizer : NSObject <NSCopying> {

	unsigned _function;
	id _kernel;
	NSData* _optimizerAlgFields;
	unsigned long long _timeStep;

}

@property (assign,nonatomic) unsigned long long timeStep;                       //@synthesize timeStep=_timeStep - In the implementation block
@property (nonatomic,readonly) id kernel;                                       //@synthesize kernel=_kernel - In the implementation block
@property (nonatomic,readonly) unsigned function;                               //@synthesize function=_function - In the implementation block
@property (nonatomic,retain,readonly) NSData * optimizerAlgFields;              //@synthesize optimizerAlgFields=_optimizerAlgFields - In the implementation block
+(id)deviceOptimizerWithKernel:(id)arg1 ;
+(id)deviceOptimizerWithFunction:(unsigned)arg1 optimizerAlgFields:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)function;
-(id)kernel;
-(unsigned long long)timeStep;
-(void)setTimeStep:(unsigned long long)arg1 ;
-(id)initWithKernel:(id)arg1 ;
-(id)initWithFunction:(unsigned)arg1 optimizerAlgFields:(id)arg2 ;
-(NSData *)optimizerAlgFields;
@end

