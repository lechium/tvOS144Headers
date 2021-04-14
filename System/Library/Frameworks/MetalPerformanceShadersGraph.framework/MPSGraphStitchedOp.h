/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MetalPerformanceShadersGraph/MPSGraphOperation.h>

@class MPSGraphTensor, NSArray;

@interface MPSGraphStitchedOp : MPSGraphOperation {

	/*^block*/id _stitchingBlock;
	MPSGraphTensor* _finalOutputTensorForStitchedRegion;
	NSArray* _opsAddedInStitchedRegion;

}
-(Value)makeMLIROpWithBuilder:(OpBuilder*)arg1 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg2 inputValues:(vector<mlir::Value, std::__1::allocator<mlir::Value> >*)arg3 opInitialization:(BOOL)arg4 name:(id)arg5 ;
-(void)recurseOperation:(id)arg1 builder:(OpBuilder*)arg2 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg3 tensorToValueMap:(map<MPSGraphTensor *, mlir::Value, std::__1::less<MPSGraphTensor *>, std::__1::allocator<std::__1::pair<MPSGraphTensor *const, mlir::Value> > >*)arg4 operationsRecursed:(id)arg5 ;
-(id)initWithGraph:(id)arg1 withBlock:(/*^block*/id)arg2 inputTensors:(id)arg3 controlDependencies:(id)arg4 name:(id)arg5 ;
@end
