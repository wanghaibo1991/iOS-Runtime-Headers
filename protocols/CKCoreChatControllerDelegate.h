/* Generated by RuntimeBrowser.
 */

@protocol CKCoreChatControllerDelegate <NSObject>

@required

- (void)chatController:(CKCoreChatController *)arg1 didReportSpamForConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 didSendCompositionInConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 willSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3;

@end
