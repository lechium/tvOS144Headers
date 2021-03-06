/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MFMessageBody.h>

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;

}
+(id)versionString;
+(id)copyNewMimeBoundary;
-(id)init;
-(void)dealloc;
-(id)attachments;
-(id)mimeType;
-(long long)numberOfAlternatives;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)isHTML;
-(BOOL)isRich;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(id)attachmentURLs;
-(id)textHtmlPart;
-(unsigned long long)totalTextSize;
-(id)topLevelPart;
-(id)preferredBodyPart;
-(long long)preferredAlternative;
-(void)setPreferredAlternative:(long long)arg1 ;
-(void)setTopLevelPart:(id)arg1 ;
-(id)mimeSubtype;
-(id)partWithNumber:(id)arg1 ;
-(id)firstPartPassingTest:(/*^block*/id)arg1 ;
@end

