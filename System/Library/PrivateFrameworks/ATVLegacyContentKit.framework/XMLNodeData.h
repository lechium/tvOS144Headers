/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface XMLNodeData : NSObject {

	NSMutableSet* nodeSet;
	id extraData;

}

@property (nonatomic,retain) NSMutableSet * nodeSet; 
@property (nonatomic,retain) id extraData; 
+(void)load;
-(void)dealloc;
-(void)setExtraData:(id)arg1 ;
-(id)extraData;
-(void)setNodeSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)nodeSet;
@end

