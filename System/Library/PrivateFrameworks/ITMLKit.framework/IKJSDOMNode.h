/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IKDOMNode, IKDOMNodeList, IKDOMDocument, JSValue;


@protocol IKJSDOMNode <JSExport>
@property (nonatomic,retain,readonly) NSString * nodeName; 
@property (nonatomic,retain) NSString * nodeValue; 
@property (nonatomic,readonly) long long nodeType; 
@property (nonatomic,__weak,readonly) IKDOMNode * parentNode; 
@property (nonatomic,retain,readonly) IKDOMNodeList * childNodes; 
@property (nonatomic,retain,readonly) IKDOMNode * firstChild; 
@property (nonatomic,retain,readonly) IKDOMNode * lastChild; 
@property (nonatomic,__weak,readonly) IKDOMNode * previousSibling; 
@property (nonatomic,__weak,readonly) IKDOMNode * nextSibling; 
@property (nonatomic,__weak,readonly) IKDOMDocument * ownerDocument; 
@property (nonatomic,retain) NSString * textContent; 
@property (assign,nonatomic,__weak) JSValue * dataItem; 
@required
-(BOOL)contains:(id)arg1;
-(NSString *)textContent;
-(void)setTextContent:(id)arg1;
-(NSString *)nodeValue;
-(long long)nodeType;
-(IKDOMNode *)nextSibling;
-(IKDOMNode *)firstChild;
-(NSString *)nodeName;
-(id)appendChild:(id)arg1;
-(IKDOMDocument *)ownerDocument;
-(void)setNodeValue:(id)arg1;
-(IKDOMNode *)parentNode;
-(IKDOMNodeList *)childNodes;
-(IKDOMNode *)lastChild;
-(IKDOMNode *)previousSibling;
-(id)removeChild:(id)arg1;
-(BOOL)hasChildNodes;
-(id)cloneNode:(BOOL)arg1;
-(BOOL)isSameNode:(id)arg1;
-(BOOL)isEqualNode:(id)arg1;
-(id)insertBefore:(id)arg1 :(id)arg2;
-(id)replaceChild:(id)arg1 :(id)arg2;
-(void)setDataItem:(id)arg1;
-(JSValue *)dataItem;
-(id)getFeature:(id)arg1 :(id)arg2;

@end

