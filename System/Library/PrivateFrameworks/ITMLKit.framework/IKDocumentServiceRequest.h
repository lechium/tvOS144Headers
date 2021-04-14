/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKServiceRequest.h>
#import <libobjc.A.dylib/IKJSViewModelLinkDelegate.h>

@class IKJSViewModelLink, NSDictionary, IKAppDocument, NSString;

@interface IKDocumentServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {

	IKJSViewModelLink* _link;
	struct {
		BOOL hasResponseDictionaryDidChange;
		BOOL hasDocumentDidChange;
	}  _dsrDelegateFlags;
	NSDictionary* _responseDictionary;
	IKAppDocument* _appDocument;

}

@property (copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) IKAppDocument * appDocument;                         //@synthesize appDocument=_appDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(IKAppDocument *)appDocument;
-(void)documentDidChangeForViewModelLink:(id)arg1 ;
-(void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2 ;
-(void)responseDictionaryDidChangeForViewModelLink:(id)arg1 ;
-(void)onSend;
-(void)onCancel;
@end

