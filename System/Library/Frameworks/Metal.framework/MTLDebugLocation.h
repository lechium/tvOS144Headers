/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@class MTLDebugInstrumentationData, MTLDebugSubProgram;

@interface MTLDebugLocation : NSObject {

	MTLDebugInstrumentationData* _data;
	DebugLocation* _debugLoc;

}

@property (nonatomic,readonly) MTLDebugSubProgram * scope; 
@property (nonatomic,readonly) unsigned line; 
@property (nonatomic,readonly) unsigned column; 
@property (nonatomic,readonly) MTLDebugLocation * inlinedAt; 
-(id)retain;
-(oneway void)release;
-(id)description;
-(void)dealloc;
-(MTLDebugSubProgram *)scope;
-(unsigned)line;
-(unsigned)column;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLDebugLocation *)inlinedAt;
-(oneway void)releaseInternal;
@end

