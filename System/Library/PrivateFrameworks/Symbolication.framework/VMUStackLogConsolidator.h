/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VMUCommonGraphInterface, VMUStackLogReader;
@class VMUDebugTimer;

@interface VMUStackLogConsolidator : NSObject {

	id<VMUCommonGraphInterface> _graph;
	id<VMUStackLogReader> _stackLogReader;
	VMUDebugTimer* _debugTimer;

}

@property (nonatomic,retain) VMUDebugTimer * debugTimer;              //@synthesize debugTimer=_debugTimer - In the implementation block
-(void)setDebugTimer:(VMUDebugTimer *)arg1 ;
-(VMUDebugTimer *)debugTimer;
-(id)stackIDsToNodesWithFilter:(/*^block*/id)arg1 ;
-(id)initWithGraph:(id)arg1 stackLogReader:(id)arg2 ;
-(id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(/*^block*/id)arg2 ;
@end

