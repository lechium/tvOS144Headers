/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface _NSJSONReader : NSObject {

	id input;
	int kind;
	NSError* error;

}
+(BOOL)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(id)error;
-(id)parseData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)parseStream:(id)arg1 options:(unsigned long long)arg2 ;
@end

