/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject {

	NSData* _hierarchyData;

}

@property (nonatomic,retain) NSData * hierarchyData;              //@synthesize hierarchyData=_hierarchyData - In the implementation block
-(void)setHierarchyData:(NSData *)arg1 ;
-(NSData *)hierarchyData;
-(id)initWithHierarchyData:(id)arg1 ;
-(id)decodeHierarchyWithContainer:(id)arg1 error:(id*)arg2 ;
@end
