/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying> {

	int _shiftState;
	NSUUID* _UUID;
	TIDocumentState* _documentState;

}

@property (nonatomic,readonly) NSUUID * UUID;                                //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) TIDocumentState * documentState;              //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,readonly) int shiftState;                               //@synthesize shiftState=_shiftState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenForKeyboardState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(id)initForKeyboardState:(id)arg1 ;
-(BOOL)isSameRequestAs:(id)arg1 ;
-(id)shortIdentifier;
-(TIDocumentState *)documentState;
-(int)shiftState;
@end

