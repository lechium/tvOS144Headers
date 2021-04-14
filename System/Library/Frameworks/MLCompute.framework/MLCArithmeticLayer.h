/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayer.h>

@interface MLCArithmeticLayer : MLCLayer {

	BOOL _binaryOperation;
	int _operation;

}

@property (nonatomic,readonly) BOOL binaryOperation;              //@synthesize binaryOperation=_binaryOperation - In the implementation block
@property (nonatomic,readonly) int operation;                     //@synthesize operation=_operation - In the implementation block
+(id)layerWithOperation:(int)arg1 ;
-(id)description;
-(int)operation;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2 ;
-(BOOL)binaryOperation;
-(id)initWithArithmeticOperation:(int)arg1 ;
-(BOOL)skipGradientComputationForSourceTensor:(id)arg1 resultTensor:(id)arg2 ;
@end

