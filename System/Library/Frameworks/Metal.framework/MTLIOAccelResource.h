/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLResource.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class NSString;

@interface MTLIOAccelResource : _MTLResource <MTLResourceSPI> {

	MTLIOAccelResource* _res;
	MTLIOAccelResource* next;
	MTLIOAccelResource* prev;
	unsigned long long uniqueId;

}

@property (readonly) IOAccelResourceRef resourceRef; 
@property (nonatomic,readonly) void* virtualAddress; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned resourceID; 
@property (nonatomic,readonly) unsigned long long resourceSize; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocationID; 
@property (assign) int responsibleProcess; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)label;
-(unsigned long long)protectionOptions;
-(void*)virtualAddress;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
-(id)retainedLabel;
-(id)initWithResource:(id)arg1 ;
-(unsigned long long)storageMode;
-(unsigned long long)gpuAddress;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(BOOL)isComplete;
-(void)waitUntilComplete;
-(BOOL)isAliasable;
-(void)makeAliasable;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)resourceOptions;
-(id<MTLHeap>)heap;
-(unsigned long long)heapOffset;
-(unsigned long long)allocatedSize;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOAccelNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(unsigned long long)resourceSize;
-(id)initMemoryless:(id)arg1 descriptor:(id)arg2 ;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(CFArrayRef)copyAnnotations;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(unsigned)resourceID;
-(BOOL)isPurgeable;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(IOAccelResourceRef)resourceRef;
-(id)initStandinWithDevice:(id)arg1 ;
@end

