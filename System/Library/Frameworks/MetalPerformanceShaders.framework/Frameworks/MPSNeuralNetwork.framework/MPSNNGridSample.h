/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSNNGridSample : MPSCNNBinaryKernel {

	BOOL _useGridValueAsInputCoordinate;

}

@property (assign,nonatomic) BOOL useGridValueAsInputCoordinate;              //@synthesize useGridValueAsInputCoordinate=_useGridValueAsInputCoordinate - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(BOOL)useGridValueAsInputCoordinate;
-(void)setUseGridValueAsInputCoordinate:(BOOL)arg1 ;
@end

