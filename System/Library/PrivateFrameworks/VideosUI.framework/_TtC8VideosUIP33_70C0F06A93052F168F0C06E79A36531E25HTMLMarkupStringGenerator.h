/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VUIHTMLMarkupParser.h>

@interface _TtC8VideosUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMarkupStringGenerator : NSObject <VUIHTMLMarkupParser> {

	 parser;
	 logger;
	 accumulator;
	 fontTraitsStack;
	 didParseEverything;

}
-(id)init;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 didEndElement:(unsigned long long)arg2 ;
-(void)parserDidFindNewline:(id)arg1 ;
-(void)parser:(id)arg1 didFindCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 ;
@end
