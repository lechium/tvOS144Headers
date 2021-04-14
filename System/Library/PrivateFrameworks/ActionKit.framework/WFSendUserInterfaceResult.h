/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface WFSendUserInterfaceResult : NSObject <NSSecureCoding> {

	NSArray* _recipients;
	NSString* _subject;
	NSString* _content;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSArray * recipients;               //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * subject;                 //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * content;                 //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSArray * attachments;              //@synthesize attachments=_attachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)content;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
@end

