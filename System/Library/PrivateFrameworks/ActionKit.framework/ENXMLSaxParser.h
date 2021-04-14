/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENXMLSaxParserDelegate;
#import <ActionKit/ActionKit-Structs.h>
@class NSURLConnection, NSArray;

@interface ENXMLSaxParser : NSObject {

	id<ENXMLSaxParserDelegate> _delegate;
	xmlParserCtxt* _parserContext;
	BOOL _parserHalted;
	BOOL _isHTML;
	NSURLConnection* _urlConnection;
	NSArray* _dtds;

}

@property (assign,nonatomic,__weak) id<ENXMLSaxParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isHTML;                                             //@synthesize isHTML=_isHTML - In the implementation block
-(id)init;
-(void)dealloc;
-(void)appendBytes:(char*)arg1 length:(int)arg2 ;
-(id<ENXMLSaxParserDelegate>)delegate;
-(void)setDelegate:(id<ENXMLSaxParserDelegate>)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)parseData:(id)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(BOOL)isHTML;
-(void)setIsHTML:(BOOL)arg1 ;
-(xmlEntity*)lookupEntity:(const char*)arg1 ;
-(xmlSAXHandler*)saxHandler;
-(void)finalizeParser;
-(BOOL)parseContentsOfFile:(id)arg1 ;
-(BOOL)parseContents:(id)arg1 ;
-(BOOL)parseContentsOfURLWithRequest:(id)arg1 ;
-(void)stopParser;
-(void)_stopAndSendError:(id)arg1 ;
@end

