/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class NSObject, NSData;

@interface MTLDebugInstrumentationData : NSObject {

	NSObject*<OS_dispatch_data> _dataMap;
	const MTLSerializedDebugInstrumentationData* _data;
	vector<const __CFString *, std::__1::allocator<const __CFString *> >* _strings;
	vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> >* _debugLocations;
	vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> >* _debugSubPrograms;
	NSData* _globalConstantsData;
	NSObject*<OS_dispatch_data> _userReflectionData;

}

@property (nonatomic,readonly) BOOL hasGlobalConstantsInstrumentationFailures; 
@property (nonatomic,readonly) BOOL hasArgumentBufferInstrumentationFailures; 
@property (nonatomic,readonly) BOOL hasArgumentLimitsInstrumentationFailures; 
@property (nonatomic,readonly) unsigned threadgroupArgumentOffset; 
@property (nonatomic,readonly) unsigned activeThreadgroupMask; 
@property (nonatomic,readonly) unsigned long long bufferAccessMask; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)debugSubProgramForID:(unsigned)arg1 ;
-(id)debugLocationForID:(unsigned)arg1 ;
-(id)stringForID:(unsigned)arg1 ;
-(id)globalConstantsData;
-(id)userReflectionData;
-(BOOL)hasGlobalConstantsInstrumentationFailures;
-(BOOL)hasArgumentBufferInstrumentationFailures;
-(BOOL)hasArgumentLimitsInstrumentationFailures;
-(unsigned)threadgroupArgumentOffset;
-(unsigned)activeThreadgroupMask;
-(unsigned long long)bufferAccessMask;
@end

