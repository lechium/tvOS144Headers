/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSViewModelLink.h>
@class IKDOMDocument;


@protocol IKJSViewModelLink <JSExport>
@property (nonatomic,retain) IKDOMDocument * document; 
@required
-(void)close:(id)arg1;
-(IKDOMDocument *)document;
-(void)setDocument:(id)arg1;

@end

#import <libobjc.A.dylib/_IKJSViewModelLinkProxy.h>

@protocol IKJSViewModelLinkDelegate;
@class IKDOMDocument, NSDictionary;

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy> {

	BOOL _isClosed;
	struct {
		BOOL hasDocumentDidChange;
		BOOL hasResponseDictionaryDidChange;
	}  _delegateFlags;
	IKDOMDocument* _document;
	NSDictionary* _responseDictionary;
	id<IKJSViewModelLinkDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IKJSViewModelLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;                            //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) IKDOMDocument * document;                                   //@synthesize document=_document - In the implementation block
-(id)init;
-(void)dealloc;
-(id<IKJSViewModelLinkDelegate>)delegate;
-(void)setDelegate:(id<IKJSViewModelLinkDelegate>)arg1 ;
-(void)cancel;
-(void)close:(id)arg1 ;
-(IKDOMDocument *)document;
-(void)setDocument:(IKDOMDocument *)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(id)asPrivateIKJSViewModelLink;
-(void)_unhandled;
@end

