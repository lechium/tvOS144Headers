/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject {

	int _source;
	OSASymbolInfo* _symbolInfo;
	unsigned long long _used_index;

}

@property (assign) int source;                                          //@synthesize source=_source - In the implementation block
@property (assign) unsigned long long used_index;                       //@synthesize used_index=_used_index - In the implementation block
@property (nonatomic,readonly) OSASymbolInfo * symbolInfo;              //@synthesize symbolInfo=_symbolInfo - In the implementation block
-(int)source;
-(void)setSource:(int)arg1 ;
-(id)initWithSymbol:(id)arg1 ;
-(id)details;
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(OSASymbolInfo *)symbolInfo;
-(id)legacy_details;
-(unsigned long long)used_index;
-(void)setUsed_index:(unsigned long long)arg1 ;
@end

