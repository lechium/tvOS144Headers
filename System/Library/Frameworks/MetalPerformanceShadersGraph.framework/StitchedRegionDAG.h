/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MPSCore/MPSKernelDAGObject.h>

@interface StitchedRegionDAG : MPSKernelDAGObject {

	unordered_map<mlir::Operation *, int, std::__1::hash<mlir::Operation *>, std::__1::equal_to<mlir::Operation *>, std::__1::allocator<std::__1::pair<mlir::Operation *const, int> > >* _placeholderOpToUsesInStitchedRegionMap;
	vector<mlir::Operation *, std::__1::allocator<mlir::Operation *> >* _placeholdersInDAG;

}
-(void)dealloc;
@end

