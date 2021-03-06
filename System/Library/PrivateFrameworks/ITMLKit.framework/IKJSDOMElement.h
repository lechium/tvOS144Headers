/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IKDOMNamedNodeMap;


@protocol IKJSDOMElement <JSExport>
@property (nonatomic,retain,readonly) NSString * tagName; 
@property (nonatomic,copy,readonly) IKDOMNamedNodeMap * attributes; 
@required
-(IKDOMNamedNodeMap *)attributes;
-(BOOL)hasAttributes;
-(id)getElementsByTagName:(id)arg1;
-(NSString *)tagName;
-(id)getAttribute:(id)arg1;
-(void)removeAttribute:(id)arg1;
-(BOOL)hasAttribute:(id)arg1;
-(void)setAttribute:(id)arg1 :(id)arg2;

@end

