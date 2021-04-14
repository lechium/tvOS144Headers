/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLParserDelegate> delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parseContentsOfURL:(id)arg1 ;
+(id)parser;
-(id)init;
-(void)dealloc;
-(id<CAMLParserDelegate>)delegate;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(NSURL *)baseURL;
-(NSError *)error;
-(id)result;
-(BOOL)parseData:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)parseString:(id)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)elementValue;
-(void)setElementValue:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(BOOL)arg2 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)parserError:(id)arg1 ;
-(void)parserWarning:(id)arg1 ;
@end

