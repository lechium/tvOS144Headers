/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <TextInput/TIKeyboardOutput.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {

	BOOL _didBeginOutput;
	long long _positionOffset;

}

@property (assign,nonatomic) long long positionOffset;              //@synthesize positionOffset=_positionOffset - In the implementation block
@property (assign,nonatomic) BOOL didBeginOutput;                   //@synthesize didBeginOutput=_didBeginOutput - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)outputWithKeyboardOutput:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextToCommit:(id)arg1 ;
-(void)setAcceptedCandidate:(id)arg1 ;
-(void)setForwardDeletionCount:(unsigned long long)arg1 ;
-(void)setInsertionTextAfterSelection:(id)arg1 ;
-(void)setShortcutConversion:(id)arg1 ;
-(void)setHandwritingStrokesToDelete:(id)arg1 ;
-(long long)positionOffset;
-(void)setPositionOffset:(long long)arg1 ;
-(BOOL)didBeginOutput;
-(void)setDidBeginOutput:(BOOL)arg1 ;
@end

