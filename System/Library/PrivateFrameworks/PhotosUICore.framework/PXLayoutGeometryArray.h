/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXLayoutGeometryArray : NSObject <NSCopying> {

	PXLayoutGeometry* _geometries;
	long long _count;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(PXLayoutGeometry)geometryAtIndex:(unsigned long long)arg1 ;
-(id)initWithGeometries:(PXLayoutGeometry*)arg1 count:(unsigned long long)arg2 ;
@end

