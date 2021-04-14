/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLDocument, TVLElement;

@interface TVLPreviewElement : TVLElement {

	TVLDocument* _feedDocument;
	TVLElement* _preview;

}

@property (nonatomic,retain) TVLElement * preview;              //@synthesize preview=_preview - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(TVLElement *)preview;
-(void)setPreview:(TVLElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(id)feedDocument;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
@end

