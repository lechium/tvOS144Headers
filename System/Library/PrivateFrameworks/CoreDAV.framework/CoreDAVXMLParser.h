/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSXMLParser.h>
#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class CoreDAVXMLElementGenerator, NSSet, NSURL, CoreDAVItem, CoreDAVErrorItem, NSError, NSString;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {

	CoreDAVXMLElementGenerator* _rootElementGenerator;
	CoreDAVXMLElementGenerator* _rootErrorGenerator;
	NSSet* _parseHints;
	NSURL* _baseURL;

}

@property (nonatomic,retain) CoreDAVXMLElementGenerator * rootElementGenerator;              //@synthesize rootElementGenerator=_rootElementGenerator - In the implementation block
@property (nonatomic,retain) CoreDAVXMLElementGenerator * rootErrorGenerator;                //@synthesize rootErrorGenerator=_rootErrorGenerator - In the implementation block
@property (nonatomic,retain) NSSet * parseHints;                                             //@synthesize parseHints=_parseHints - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) CoreDAVItem * rootElement; 
@property (nonatomic,readonly) CoreDAVErrorItem * rootError; 
@property (readonly) NSError * parserError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4 ;
-(void)setParseHints:(NSSet *)arg1 ;
-(CoreDAVItem *)rootElement;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(CoreDAVErrorItem *)rootError;
-(NSSet *)parseHints;
-(CoreDAVXMLElementGenerator *)rootErrorGenerator;
-(void)setRootErrorGenerator:(CoreDAVXMLElementGenerator *)arg1 ;
-(void)setRootElementGenerator:(CoreDAVXMLElementGenerator *)arg1 ;
-(CoreDAVXMLElementGenerator *)rootElementGenerator;
@end

