/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface NSMetadataQueryResultGroup : NSObject {

	id _private[9];
	unsigned long long _private2[1];
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (copy,readonly) NSArray * subgroups; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
-(void)dealloc;
-(id)value;
-(unsigned long long)resultCount;
-(id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4 ;
-(void)_addResult:(unsigned long long)arg1 ;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(NSArray *)results;
-(NSString *)attribute;
-(NSArray *)subgroups;
-(void)_zapResultArray;
@end

