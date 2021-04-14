/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class NSString;

@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct> {

	int _asrHypothesisIndex;
	NSString* _rewrittenUtterance;
	NSString* _externalParserId;

}

@property (assign) int asrHypothesisIndex;                               //@synthesize asrHypothesisIndex=_asrHypothesisIndex - In the implementation block
@property (nonatomic,retain) NSString * rewrittenUtterance;              //@synthesize rewrittenUtterance=_rewrittenUtterance - In the implementation block
@property (nonatomic,retain) NSString * externalParserId;                //@synthesize externalParserId=_externalParserId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)rewrittenUtterance;
-(NSString *)externalParserId;
-(int)asrHypothesisIndex;
-(id)initWithAsrHypothesisIndex:(int)arg1 rewrittenUtterace:(id)arg2 externalParserId:(id)arg3 ;
-(void)setAsrHypothesisIndex:(int)arg1 ;
-(void)setRewrittenUtterance:(NSString *)arg1 ;
-(void)setExternalParserId:(NSString *)arg1 ;
@end

