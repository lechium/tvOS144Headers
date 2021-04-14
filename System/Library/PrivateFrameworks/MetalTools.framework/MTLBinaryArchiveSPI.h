/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>
@property (readonly) unsigned long long options; 
@property (readonly) NSArray * keys; 
@required
-(NSArray *)keys;
-(unsigned long long)options;
-(id)formattedDescription:(unsigned long long)arg1;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2;
-(id)getBinaryDataForKey:(id)arg1;

@end

