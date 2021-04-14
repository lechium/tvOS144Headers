/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MPSCore/MPSCore-Structs.h>
@interface MPSStateResourceList : NSObject {

	ResourceListNode* _list;

}
+(id)resourceList;
+(id)resourceListWithTextureDescriptors:(id)arg1 ;
+(id)resourceListWithBufferSizes:(unsigned long long)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)appendTexture:(id)arg1 ;
-(void)appendBuffer:(unsigned long long)arg1 ;
-(void)appendTexture:(id)arg1 format:(unsigned long long)arg2 ;
@end

