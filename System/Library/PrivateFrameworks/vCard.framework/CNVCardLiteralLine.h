/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <vCard/CNVCardLine.h>

@class NSData;

@interface CNVCardLiteralLine : CNVCardLine {

	NSData* _literalValue;

}
+(id)lineWithLiteralValue:(id)arg1 ;
-(void)serializeWithStrategy:(id)arg1 ;
-(id)initWithLiteralValue:(id)arg1 ;
@end

